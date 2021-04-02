# Font6x8

6x8 monochrome bitmap font for ASCII printable characters.

A collection of header files containing a 6x8 bitmap font.

## Encoding

The character 'A' (0x41 / 65) is encoded as `{0x00, 0x30, 0x0C, 0x0B, 0x0C, 0x30}`.

```text
       000000
       xxxxxx
       030003
       00DBC0
       ||||||
       vvvvvv
0  ->  ...x..
1  ->  ...x..
2  ->  ..x.x.
3  ->  ..xxx.
4  ->  .x...x
5  ->  .x...x
6  ->  ......
7  ->  ......
```

## References

- [ASCII](https://en.wikipedia.org/wiki/ASCII)
- [font8x8](https://github.com/dhepper/font8x8)
