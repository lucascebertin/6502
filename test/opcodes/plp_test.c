#include "unity.h"
#include "cpu.h"

int stackEndAddress = 0x100;
char PLP = 0x28;

struct BUS bus;
struct CPU cpu;

void setUp(void) {
  bus = initializeBus();
  writeBus(0xFFFC, 0x00, &bus);
  writeBus(0xFFFD, 0x06, &bus);
  resetCpu(&cpu, &bus);
}

void tearDown(void) {
}

void should_set_status_flags(void) {
  writeBus(stackEndAddress + cpu.stack_pointer, 0xFF, &bus);
  cpu.stack_pointer--;

  writeBus(0x600, PLP, &bus);

  clockCpu(&cpu, &bus);

  TEST_ASSERT_EQUAL(true, cpu.status.carry);
  TEST_ASSERT_EQUAL(true, cpu.status.zero);
  TEST_ASSERT_EQUAL(true, cpu.status.interrupt);
  TEST_ASSERT_EQUAL(true, cpu.status.decimal);
  TEST_ASSERT_EQUAL(false, cpu.status.break_cmd);
  TEST_ASSERT_EQUAL(true, cpu.status.overflow);
  TEST_ASSERT_EQUAL(true, cpu.status.negative);
}

int main(void) {
    UNITY_BEGIN();

    RUN_TEST(should_set_status_flags);

    return UNITY_END();
}
