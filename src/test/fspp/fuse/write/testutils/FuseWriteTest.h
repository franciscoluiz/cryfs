#pragma once
#ifndef TEST_FSPP_FUSE_WRITE_TESTUTILS_FUSEWRITETEST_H_
#define TEST_FSPP_FUSE_WRITE_TESTUTILS_FUSEWRITETEST_H_

#include "test/testutils/FuseTest.h"

class FuseWriteTest: public FuseTest {
public:
  const char *FILENAME = "/myfile";

  void WriteFile(const char *filename, const void *buf, size_t count, off_t offset);
  size_t WriteFileAllowError(const char *filename, const void *buf, size_t count, off_t offset);

private:
  int OpenFile(const TempTestFS *fs, const char *filename);
};

#endif