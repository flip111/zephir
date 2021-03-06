
#ifdef HAVE_CONFIG_H
#include "../ext_config.h"
#endif

#include <php.h>
#include "../php_ext.h"
#include "../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/object.h"
#include "kernel/memory.h"
#include "kernel/array.h"


/**
 * Class with constructor + params
 */
ZEPHIR_INIT_CLASS(Test_SPropertyAccess) {

	ZEPHIR_REGISTER_CLASS(Test, SPropertyAccess, test, spropertyaccess, test_spropertyaccess_method_entry, 0);

	zend_declare_property_null(test_spropertyaccess_ce, SL("a"), ZEND_ACC_PROTECTED|ZEND_ACC_STATIC TSRMLS_CC);

	zend_declare_property_null(test_spropertyaccess_ce, SL("b"), ZEND_ACC_PRIVATE|ZEND_ACC_STATIC TSRMLS_CC);

	return SUCCESS;

}

PHP_METHOD(Test_SPropertyAccess, __construct) {

	zval _0, _1, _2;
		zval this_zv;
	zval *this_ptr = getThis();
	if (EXPECTED(this_ptr)) {
		ZVAL_OBJ(&this_zv, Z_OBJ_P(this_ptr));
		this_ptr = &this_zv;
	} else this_ptr = NULL;
	
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_ZVAL_NREF(_0);
	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "abc");
	zephir_update_static_property_ce(test_spropertyaccess_ce, SL("a"), &_0 TSRMLS_CC);
	zephir_read_static_property_ce(&_0, test_spropertyaccess_ce, SL("a"), PH_NOISY_CC | PH_READONLY);
	zephir_array_fetch_long(&_1, &_0, 0, PH_NOISY | PH_READONLY, "test/spropertyaccess.zep", 15 TSRMLS_CC);
	zephir_update_static_property_ce(test_spropertyaccess_ce, SL("b"), &_1);
	ZEPHIR_OBS_VAR(&_2);
	zephir_read_static_property_ce(&_2, test_spropertyaccess_ce, SL("b"), PH_NOISY_CC);
	zephir_update_static_property_ce(test_scallexternal_ce, SL("sproperty"), &_2);
	ZEPHIR_OBS_NVAR(&_2);
	zephir_read_static_property_ce(&_2, test_scallexternal_ce, SL("sproperty"), PH_NOISY_CC);
	zephir_update_static_property_ce(test_spropertyaccess_ce, SL("b"), &_2);
	ZEPHIR_MM_RESTORE();

}

