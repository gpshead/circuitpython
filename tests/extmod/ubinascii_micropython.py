try:
    try:
        import ubinascii as binascii
    except ImportError:
        import binascii
except ImportError:
    print("SKIP")
    raise SystemExit

# two arguments supported in uPy but not CPython
a = binascii.hexlify(b'123', ':')
print(a)
# Ensure that the second argument changes the output but still contains.
# the hex values.
assert binascii.hexlify(b'spam', b'-') != binascii.hexlify(b'spam')
assert binascii.hexlify(b'spam', b'-')[:2] == binascii.hexlify(b's'))
assert binascii.hexlify(b'spam', b'-')[-2:] == binascii.hexlify(b'm'))

# zero length buffer
print(binascii.hexlify(b'', b':'))

# A zero length sep should acts like no sep.
# https://github.com/micropython/micropython/issues/2287
assert binascii.hexlify(b'spam', b'') == binascii.hexlify(b'spam')
