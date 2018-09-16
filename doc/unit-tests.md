Compiling/running unit tests
------------------------------------

Unit tests will be automatically compiled if dependencies were met in `./configure`
and tests weren't explicitly disabled.

After configuring, they can be run with `make check`.

To run the btcrd tests manually, launch `src/test/test_btcr`.

To add more btcrd tests, add `BOOST_AUTO_TEST_CASE` functions to the existing
.cpp files in the `test/` directory or add new .cpp files that
implement new BOOST_AUTO_TEST_SUITE sections.

To run the btcr-qt tests manually, launch `src/qt/test/test_btcr-qt`

To add more btcr-qt tests, add them to the `src/qt/test/` directory and
the `src/qt/test/test_main.cpp` file.
