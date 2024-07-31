# unittest-example

step 1. configure

```
cmake -Bbuild build -DBUILD_TESTS=ON
```

step 2. build

```
cmake --build build
```

step 3. run test 

```
cmake --build build -t test

Test project /Users/chris/unittest-example/build/tests
    Start 1: unittest
1/1 Test #1: unittest .........................   Passed    0.48 sec

100% tests passed, 0 tests failed out of 1

Total Test time (real) =   0.49 sec
Built target test

```

