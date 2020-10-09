#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>
#include<telecom.h>
#define PROJECT_NAME    "Telecom_Billing_Management_System"

void test_addrecords();
void test_listrecords();
void test_modifyrecords();
void test_searchrecords();
void test_payment();

int main() {

  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
  

  CU_basic_set_mode(CU_BRM_VERBOSE);


  CU_basic_run_tests();


  CU_cleanup_registry();

  return 0;
}




