#ifndef _out_arm_plat_rockchip_include_generated_conf_h_
#define _out_arm_plat_rockchip_include_generated_conf_h_
#define CFG_AES_GCM_TABLE_BASED 1
#define CFG_ARM32_ta_arm32 1
#define CFG_ARM64_core 1
#define CFG_ARM64_ta_arm64 1
/* CFG_BOOT_SECONDARY_REQUEST is not set */
#define CFG_CC_OPTIMIZE_FOR_SIZE 1
/* CFG_CORE_BGET_BESTFIT is not set */
#define CFG_CORE_BIGNUM_MAX_BITS 4096
#define CFG_CORE_CLUSTER_SHIFT 2
#define CFG_CORE_HEAP_SIZE (128 * 1024)
/* CFG_CORE_LARGE_PHYS_ADDR is not set */
/* CFG_CORE_RODATA_NOEXEC is not set */
#define CFG_CORE_RWDATA_NOEXEC 1
/* CFG_CORE_SANITIZE_KADDRESS is not set */
/* CFG_CORE_SANITIZE_UNDEFINED is not set */
#define CFG_CORE_TZSRAM_EMUL_SIZE 458752
#define CFG_CORE_UNMAP_CORE_AT_EL0 1
#define CFG_CORE_WORKAROUND_SPECTRE_BP 1
#define CFG_CORE_WORKAROUND_SPECTRE_BP_SEC 1
#define CFG_CRYPTO 1
#define CFG_CRYPTOLIB_DIR core/lib/libtomcrypt
#define CFG_CRYPTOLIB_NAME tomcrypt
#define CFG_CRYPTO_AES 1
/* CFG_CRYPTO_AES_GCM_FROM_CRYPTOLIB is not set */
#define CFG_CRYPTO_CBC 1
#define CFG_CRYPTO_CBC_MAC 1
#define CFG_CRYPTO_CCM 1
#define CFG_CRYPTO_CMAC 1
#define CFG_CRYPTO_CONCAT_KDF 1
#define CFG_CRYPTO_CTR 1
#define CFG_CRYPTO_CTS 1
#define CFG_CRYPTO_DES 1
#define CFG_CRYPTO_DH 1
#define CFG_CRYPTO_DSA 1
#define CFG_CRYPTO_ECB 1
#define CFG_CRYPTO_ECC 1
#define CFG_CRYPTO_GCM 1
#define CFG_CRYPTO_HKDF 1
#define CFG_CRYPTO_HMAC 1
#define CFG_CRYPTO_MD5 1
#define CFG_CRYPTO_PBKDF2 1
#define CFG_CRYPTO_RSA 1
#define CFG_CRYPTO_SHA1 1
#define CFG_CRYPTO_SHA224 1
#define CFG_CRYPTO_SHA256 1
#define CFG_CRYPTO_SHA384 1
#define CFG_CRYPTO_SHA512 1
#define CFG_CRYPTO_SIZE_OPTIMIZATION 1
#define CFG_CRYPTO_XTS 1
/* CFG_DEBUG is not set */
#define CFG_DEBUG_INFO 1
/* CFG_DT is not set */
#define CFG_DTB_MAX_SIZE 0x10000
#define CFG_DYN_SHM_CAP 1
/* CFG_EARLY_TA is not set */
#define CFG_GENERIC_BOOT 1
#define CFG_GIC 1
#define CFG_GP_SOCKETS 1
#define CFG_HWSUPP_MEM_PERM_PXN 1
#define CFG_KERN_LINKER_ARCH aarch64
#define CFG_KERN_LINKER_FORMAT elf64-littleaarch64
#define CFG_LIBUTILS_WITH_ISOC 1
#define CFG_LPAE_ADDR_SPACE_SIZE (1ull << 32)
#define CFG_LTC_OPTEE_THREAD 1
#define CFG_MMAP_REGIONS 13
#define CFG_MSG_LONG_PREFIX_MASK 0x1a
#define CFG_NUM_THREADS 2
#define CFG_OPTEE_REVISION_MAJOR 3
#define CFG_OPTEE_REVISION_MINOR 3
#define CFG_OS_REV_REPORTS_GIT_SHA1 1
#define CFG_OTP_SUPPORT 1
/* CFG_PAGED_USER_TA is not set */
#define CFG_PM_STUBS 1
#define CFG_REE_FS 1
#define CFG_REE_FS_TA 1
#define CFG_RESERVED_VASPACE_SIZE (1024 * 1024 * 10)
#define CFG_RK_BOOT 1
/* CFG_RK_CRYPTO_AES_DES is not set */
#define CFG_RK_CRYPTO_BORINGSSL 1
/* CFG_RK_CRYPTO_HASH is not set */
/* CFG_RK_CRYPTO_PKA is not set */
/* CFG_RK_HW_CRYPTO_V2 is not set */
/* CFG_RK_IO_ADAPTER is not set */
#define CFG_RK_MASK_NATIVE_INTR 1
#define CFG_RK_OTP 1
#define CFG_RK_RPMB_NO_DIRF_HASH 1
/* CFG_RK_TIMER is not set */
#define CFG_RK_UART 1
#define CFG_RK_UBOOT_STORE 1
#define CFG_RK_UBOOT_STORE_OTP 1
#define CFG_RK_USER_TA 1
#define CFG_RPMB_FS 1
/* CFG_RPMB_FS_DEBUG_DATA is not set */
#define CFG_RPMB_FS_DEV_ID 0
#define CFG_RPMB_SW_KEY 1
#define CFG_RPMB_WRITE_KEY 1
#define CFG_SCTLR_ALIGNMENT_CHECK 1
#define CFG_SECSTOR_TA 1
#define CFG_SECSTOR_TA_MGMT_PTA 1
/* CFG_SECURE_DATA_PATH is not set */
#define CFG_SECURE_TIME_SOURCE_CNTPCT 1
#define CFG_SM_NO_CYCLE_COUNTING 1
#define CFG_SYSTEM_PTA 1
#define CFG_TA_BIGNUM_MAX_BITS 2048
/* CFG_TA_DRM is not set */
#define CFG_TA_DYNLINK 1
#define CFG_TA_FLOAT_SUPPORT 1
/* CFG_TA_GPROF_SUPPORT is not set */
#define CFG_TA_MBEDTLS 1
#define CFG_TA_MBEDTLS_SELF_TEST 1
#define CFG_TEE_API_VERSION GPD-1.1-dev
#define CFG_TEE_CORE_DEBUG 1
#define CFG_TEE_CORE_EMBED_INTERNAL_TESTS 1
#define CFG_TEE_CORE_LOG_LEVEL 2
/* CFG_TEE_CORE_MALLOC_DEBUG is not set */
#define CFG_TEE_CORE_NB_CORE 4
#define CFG_TEE_CORE_TA_TRACE 1
#define CFG_TEE_FS_KEY_MANAGER_TEST 1
#define CFG_TEE_FW_IMPL_VERSION FW_IMPL_UNDEF
#define CFG_TEE_FW_MANUFACTURER FW_MAN_UNDEF
#define CFG_TEE_IMPL_DESCR OPTEE
#define CFG_TEE_MANUFACTURER LINARO
#define CFG_TEE_TA_LOG_LEVEL 1
/* CFG_TEE_TA_MALLOC_DEBUG is not set */
/* CFG_ULIBS_GPROF is not set */
#define CFG_UNWIND 1
#define CFG_WITH_ARM_TRUSTED_FW 1
#define CFG_WITH_LPAE 1
/* CFG_WITH_PAGER is not set */
#define CFG_WITH_SOFTWARE_PRNG 1
#define CFG_WITH_STACK_CANARIES 1
#define CFG_WITH_STATS 1
#define CFG_WITH_USER_TA 1
#define CFG_WITH_VFP 1
#define PLATFORM_FLAVOR rk3326
#define PLATFORM_FLAVOR_rk3326 1
#define PLATFORM_rockchip 1
#define _CFG_CRYPTO_WITH_ACIPHER 1
#define _CFG_CRYPTO_WITH_ASN1 1
#define _CFG_CRYPTO_WITH_AUTHENC 1
#define _CFG_CRYPTO_WITH_CBC 1
#define _CFG_CRYPTO_WITH_CIPHER 1
#define _CFG_CRYPTO_WITH_HASH 1
#define _CFG_CRYPTO_WITH_MAC 1
#endif
