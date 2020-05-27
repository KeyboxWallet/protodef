/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9.1 at Wed May 27 19:15:11 2020. */

#ifndef PB_MESSAGES_PB_H_INCLUDED
#define PB_MESSAGES_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _DeviceMode {
    DeviceMode_MODE_BOOTLOADER = 0,
    DeviceMode_MODE_APP = 1
} DeviceMode;
#define _DeviceMode_MIN DeviceMode_MODE_BOOTLOADER
#define _DeviceMode_MAX DeviceMode_MODE_APP
#define _DeviceMode_ARRAYSIZE ((DeviceMode)(DeviceMode_MODE_APP+1))

typedef enum _LockState {
    LockState_UNKNOWN = 0,
    LockState_UNLOCKED = 1,
    LockState_LOCKED = 2
} LockState;
#define _LockState_MIN LockState_UNKNOWN
#define _LockState_MAX LockState_LOCKED
#define _LockState_ARRAYSIZE ((LockState)(LockState_LOCKED+1))

typedef enum _EccAlgorithm {
    EccAlgorithm_SECP256K1 = 0
} EccAlgorithm;
#define _EccAlgorithm_MIN EccAlgorithm_SECP256K1
#define _EccAlgorithm_MAX EccAlgorithm_SECP256K1
#define _EccAlgorithm_ARRAYSIZE ((EccAlgorithm)(EccAlgorithm_SECP256K1+1))

/* Struct definitions */
typedef struct _EraseDataRequest {
    char dummy_field;
/* @@protoc_insertion_point(struct:EraseDataRequest) */
} EraseDataRequest;

typedef struct _GenericConfirmReply {
    char dummy_field;
/* @@protoc_insertion_point(struct:GenericConfirmReply) */
} GenericConfirmReply;

typedef struct _GetModeAndVersionRequest {
    char dummy_field;
/* @@protoc_insertion_point(struct:GetModeAndVersionRequest) */
} GetModeAndVersionRequest;

typedef struct _GetWalletIdentifierRequest {
    char dummy_field;
/* @@protoc_insertion_point(struct:GetWalletIdentifierRequest) */
} GetWalletIdentifierRequest;

typedef struct _LockSerialNo {
    char dummy_field;
/* @@protoc_insertion_point(struct:LockSerialNo) */
} LockSerialNo;

typedef PB_BYTES_ARRAY_T(8192) BitcoinSignRequest_psbt_t;
typedef struct _BitcoinSignRequest {
    bool testnet;
    BitcoinSignRequest_psbt_t psbt;
/* @@protoc_insertion_point(struct:BitcoinSignRequest) */
} BitcoinSignRequest;

typedef PB_BYTES_ARRAY_T(8192) BitcoinSignResult_psbt_t;
typedef struct _BitcoinSignResult {
    BitcoinSignResult_psbt_t psbt;
/* @@protoc_insertion_point(struct:BitcoinSignResult) */
} BitcoinSignResult;

typedef PB_BYTES_ARRAY_T(512) EccGetExtendedPublicKeyReply_pubkey_t;
typedef PB_BYTES_ARRAY_T(256) EccGetExtendedPublicKeyReply_chainCode_t;
typedef struct _EccGetExtendedPublicKeyReply {
    char hdPath[512];
    EccAlgorithm algorithm;
    EccGetExtendedPublicKeyReply_pubkey_t pubkey;
    EccGetExtendedPublicKeyReply_chainCode_t chainCode;
/* @@protoc_insertion_point(struct:EccGetExtendedPublicKeyReply) */
} EccGetExtendedPublicKeyReply;

typedef struct _EccGetExtendedPublicKeyRequest {
    char hdPath[512];
    EccAlgorithm algorithm;
/* @@protoc_insertion_point(struct:EccGetExtendedPublicKeyRequest) */
} EccGetExtendedPublicKeyRequest;

typedef PB_BYTES_ARRAY_T(512) EccGetPublicKeyReply_pubkey_t;
typedef struct _EccGetPublicKeyReply {
    char hdPath[512];
    EccAlgorithm algorithm;
    EccGetPublicKeyReply_pubkey_t pubkey;
/* @@protoc_insertion_point(struct:EccGetPublicKeyReply) */
} EccGetPublicKeyReply;

typedef struct _EccGetPublicKeyRequest {
    char hdPath[512];
    EccAlgorithm algorithm;
/* @@protoc_insertion_point(struct:EccGetPublicKeyRequest) */
} EccGetPublicKeyRequest;

typedef PB_BYTES_ARRAY_T(512) EccMultiplyReply_input_pubkey_t;
typedef PB_BYTES_ARRAY_T(512) EccMultiplyReply_dev_pubkey_t;
typedef PB_BYTES_ARRAY_T(512) EccMultiplyReply_result_t;
typedef struct _EccMultiplyReply {
    char hdPath[512];
    EccAlgorithm algorithm;
    EccMultiplyReply_input_pubkey_t input_pubkey;
    EccMultiplyReply_dev_pubkey_t dev_pubkey;
    EccMultiplyReply_result_t result;
/* @@protoc_insertion_point(struct:EccMultiplyReply) */
} EccMultiplyReply;

typedef PB_BYTES_ARRAY_T(512) EccMultiplyRequest_input_pubkey_t;
typedef struct _EccMultiplyRequest {
    char hdPath[512];
    EccAlgorithm algorithm;
    EccMultiplyRequest_input_pubkey_t input_pubkey;
/* @@protoc_insertion_point(struct:EccMultiplyRequest) */
} EccMultiplyRequest;

typedef struct _EccSignOptions {
    bool rfc6979;
    bool graphene_canonize;
/* @@protoc_insertion_point(struct:EccSignOptions) */
} EccSignOptions;

typedef PB_BYTES_ARRAY_T(512) EccSignResult_pubkey_t;
typedef PB_BYTES_ARRAY_T(512) EccSignResult_hash_t;
typedef PB_BYTES_ARRAY_T(512) EccSignResult_R_t;
typedef PB_BYTES_ARRAY_T(512) EccSignResult_S_t;
typedef struct _EccSignResult {
    char hdPath[512];
    EccSignResult_pubkey_t pubkey;
    EccSignResult_hash_t hash;
    EccSignResult_R_t R;
    EccSignResult_S_t S;
    uint32_t recover_param;
/* @@protoc_insertion_point(struct:EccSignResult) */
} EccSignResult;

typedef struct _GetModeAndVersionReply {
    DeviceMode mode;
    char firmwareVersion[16];
    char deviceSerialNo[64];
    LockState isLocked;
/* @@protoc_insertion_point(struct:GetModeAndVersionReply) */
} GetModeAndVersionReply;

typedef PB_BYTES_ARRAY_T(32) GetWalletIdentifierReply_bip32MasterKeyId_t;
typedef struct _GetWalletIdentifierReply {
    GetWalletIdentifierReply_bip32MasterKeyId_t bip32MasterKeyId;
/* @@protoc_insertion_point(struct:GetWalletIdentifierReply) */
} GetWalletIdentifierReply;

typedef struct _RequestRejected {
    uint32_t requestId;
    int32_t errCode;
    char errMessage[512];
/* @@protoc_insertion_point(struct:RequestRejected) */
} RequestRejected;

typedef PB_BYTES_ARRAY_T(512) SendUpgradeFirmware_sha256hash_t;
typedef PB_BYTES_ARRAY_T(128) SendUpgradeFirmware_signature_t;
typedef struct _SendUpgradeFirmware {
    char firmwareVersion[16];
    SendUpgradeFirmware_sha256hash_t sha256hash;
    SendUpgradeFirmware_signature_t signature;
    pb_callback_t firmware;
/* @@protoc_insertion_point(struct:SendUpgradeFirmware) */
} SendUpgradeFirmware;

typedef PB_BYTES_ARRAY_T(512) UpgradeStartRequest_sha256hash_t;
typedef struct _UpgradeStartRequest {
    char firmwareVersion[16];
    UpgradeStartRequest_sha256hash_t sha256hash;
/* @@protoc_insertion_point(struct:UpgradeStartRequest) */
} UpgradeStartRequest;

typedef struct _WriteSerialNo {
    char deviceSerialNo[64];
/* @@protoc_insertion_point(struct:WriteSerialNo) */
} WriteSerialNo;

typedef struct _WriteSerialNoReply {
    bool writeSuccess;
    char deviceSerialNo[64];
/* @@protoc_insertion_point(struct:WriteSerialNoReply) */
} WriteSerialNoReply;

typedef struct _lockSerialNoReply {
    bool lockSuccess;
    char deviceSerialNo[64];
/* @@protoc_insertion_point(struct:lockSerialNoReply) */
} lockSerialNoReply;

typedef PB_BYTES_ARRAY_T(512) EccSignRequest_hash_t;
typedef struct _EccSignRequest {
    char hdPath[512];
    EccSignRequest_hash_t hash;
    EccAlgorithm algorithm;
    EccSignOptions options;
/* @@protoc_insertion_point(struct:EccSignRequest) */
} EccSignRequest;

/* Default values for struct fields */

/* Initializer values for message structs */
#define RequestRejected_init_default             {0, 0, ""}
#define GenericConfirmReply_init_default         {0}
#define GetModeAndVersionRequest_init_default    {0}
#define GetModeAndVersionReply_init_default      {_DeviceMode_MIN, "", "", _LockState_MIN}
#define UpgradeStartRequest_init_default         {"", {0, {0}}}
#define SendUpgradeFirmware_init_default         {"", {0, {0}}, {0, {0}}, {{NULL}, NULL}}
#define WriteSerialNo_init_default               {""}
#define WriteSerialNoReply_init_default          {0, ""}
#define LockSerialNo_init_default                {0}
#define lockSerialNoReply_init_default           {0, ""}
#define EccSignOptions_init_default              {0, 0}
#define EccSignRequest_init_default              {"", {0, {0}}, _EccAlgorithm_MIN, EccSignOptions_init_default}
#define EccSignResult_init_default               {"", {0, {0}}, {0, {0}}, {0, {0}}, {0, {0}}, 0}
#define EccGetPublicKeyRequest_init_default      {"", _EccAlgorithm_MIN}
#define EccGetPublicKeyReply_init_default        {"", _EccAlgorithm_MIN, {0, {0}}}
#define EccGetExtendedPublicKeyRequest_init_default {"", _EccAlgorithm_MIN}
#define EccGetExtendedPublicKeyReply_init_default {"", _EccAlgorithm_MIN, {0, {0}}, {0, {0}}}
#define GetWalletIdentifierRequest_init_default  {0}
#define GetWalletIdentifierReply_init_default    {{0, {0}}}
#define EccMultiplyRequest_init_default          {"", _EccAlgorithm_MIN, {0, {0}}}
#define EccMultiplyReply_init_default            {"", _EccAlgorithm_MIN, {0, {0}}, {0, {0}}, {0, {0}}}
#define EraseDataRequest_init_default            {0}
#define BitcoinSignRequest_init_default          {0, {0, {0}}}
#define BitcoinSignResult_init_default           {{0, {0}}}
#define RequestRejected_init_zero                {0, 0, ""}
#define GenericConfirmReply_init_zero            {0}
#define GetModeAndVersionRequest_init_zero       {0}
#define GetModeAndVersionReply_init_zero         {_DeviceMode_MIN, "", "", _LockState_MIN}
#define UpgradeStartRequest_init_zero            {"", {0, {0}}}
#define SendUpgradeFirmware_init_zero            {"", {0, {0}}, {0, {0}}, {{NULL}, NULL}}
#define WriteSerialNo_init_zero                  {""}
#define WriteSerialNoReply_init_zero             {0, ""}
#define LockSerialNo_init_zero                   {0}
#define lockSerialNoReply_init_zero              {0, ""}
#define EccSignOptions_init_zero                 {0, 0}
#define EccSignRequest_init_zero                 {"", {0, {0}}, _EccAlgorithm_MIN, EccSignOptions_init_zero}
#define EccSignResult_init_zero                  {"", {0, {0}}, {0, {0}}, {0, {0}}, {0, {0}}, 0}
#define EccGetPublicKeyRequest_init_zero         {"", _EccAlgorithm_MIN}
#define EccGetPublicKeyReply_init_zero           {"", _EccAlgorithm_MIN, {0, {0}}}
#define EccGetExtendedPublicKeyRequest_init_zero {"", _EccAlgorithm_MIN}
#define EccGetExtendedPublicKeyReply_init_zero   {"", _EccAlgorithm_MIN, {0, {0}}, {0, {0}}}
#define GetWalletIdentifierRequest_init_zero     {0}
#define GetWalletIdentifierReply_init_zero       {{0, {0}}}
#define EccMultiplyRequest_init_zero             {"", _EccAlgorithm_MIN, {0, {0}}}
#define EccMultiplyReply_init_zero               {"", _EccAlgorithm_MIN, {0, {0}}, {0, {0}}, {0, {0}}}
#define EraseDataRequest_init_zero               {0}
#define BitcoinSignRequest_init_zero             {0, {0, {0}}}
#define BitcoinSignResult_init_zero              {{0, {0}}}

/* Field tags (for use in manual encoding/decoding) */
#define BitcoinSignRequest_testnet_tag           1
#define BitcoinSignRequest_psbt_tag              2
#define BitcoinSignResult_psbt_tag               1
#define EccGetExtendedPublicKeyReply_hdPath_tag  1
#define EccGetExtendedPublicKeyReply_algorithm_tag 2
#define EccGetExtendedPublicKeyReply_pubkey_tag  3
#define EccGetExtendedPublicKeyReply_chainCode_tag 4
#define EccGetExtendedPublicKeyRequest_hdPath_tag 1
#define EccGetExtendedPublicKeyRequest_algorithm_tag 2
#define EccGetPublicKeyReply_hdPath_tag          1
#define EccGetPublicKeyReply_algorithm_tag       2
#define EccGetPublicKeyReply_pubkey_tag          3
#define EccGetPublicKeyRequest_hdPath_tag        1
#define EccGetPublicKeyRequest_algorithm_tag     2
#define EccMultiplyReply_hdPath_tag              1
#define EccMultiplyReply_algorithm_tag           2
#define EccMultiplyReply_input_pubkey_tag        3
#define EccMultiplyReply_dev_pubkey_tag          4
#define EccMultiplyReply_result_tag              5
#define EccMultiplyRequest_hdPath_tag            1
#define EccMultiplyRequest_algorithm_tag         2
#define EccMultiplyRequest_input_pubkey_tag      3
#define EccSignOptions_rfc6979_tag               1
#define EccSignOptions_graphene_canonize_tag     2
#define EccSignResult_hdPath_tag                 1
#define EccSignResult_pubkey_tag                 2
#define EccSignResult_hash_tag                   3
#define EccSignResult_R_tag                      4
#define EccSignResult_S_tag                      5
#define EccSignResult_recover_param_tag          6
#define GetModeAndVersionReply_mode_tag          1
#define GetModeAndVersionReply_firmwareVersion_tag 2
#define GetModeAndVersionReply_deviceSerialNo_tag 3
#define GetModeAndVersionReply_isLocked_tag      4
#define GetWalletIdentifierReply_bip32MasterKeyId_tag 1
#define RequestRejected_requestId_tag            1
#define RequestRejected_errCode_tag              2
#define RequestRejected_errMessage_tag           3
#define SendUpgradeFirmware_firmwareVersion_tag  1
#define SendUpgradeFirmware_sha256hash_tag       2
#define SendUpgradeFirmware_signature_tag        3
#define SendUpgradeFirmware_firmware_tag         4
#define UpgradeStartRequest_firmwareVersion_tag  1
#define UpgradeStartRequest_sha256hash_tag       2
#define WriteSerialNo_deviceSerialNo_tag         1
#define WriteSerialNoReply_writeSuccess_tag      1
#define WriteSerialNoReply_deviceSerialNo_tag    2
#define lockSerialNoReply_lockSuccess_tag        1
#define lockSerialNoReply_deviceSerialNo_tag     2
#define EccSignRequest_hdPath_tag                1
#define EccSignRequest_hash_tag                  2
#define EccSignRequest_algorithm_tag             3
#define EccSignRequest_options_tag               4

/* Struct field encoding specification for nanopb */
extern const pb_field_t RequestRejected_fields[4];
extern const pb_field_t GenericConfirmReply_fields[1];
extern const pb_field_t GetModeAndVersionRequest_fields[1];
extern const pb_field_t GetModeAndVersionReply_fields[5];
extern const pb_field_t UpgradeStartRequest_fields[3];
extern const pb_field_t SendUpgradeFirmware_fields[5];
extern const pb_field_t WriteSerialNo_fields[2];
extern const pb_field_t WriteSerialNoReply_fields[3];
extern const pb_field_t LockSerialNo_fields[1];
extern const pb_field_t lockSerialNoReply_fields[3];
extern const pb_field_t EccSignOptions_fields[3];
extern const pb_field_t EccSignRequest_fields[5];
extern const pb_field_t EccSignResult_fields[7];
extern const pb_field_t EccGetPublicKeyRequest_fields[3];
extern const pb_field_t EccGetPublicKeyReply_fields[4];
extern const pb_field_t EccGetExtendedPublicKeyRequest_fields[3];
extern const pb_field_t EccGetExtendedPublicKeyReply_fields[5];
extern const pb_field_t GetWalletIdentifierRequest_fields[1];
extern const pb_field_t GetWalletIdentifierReply_fields[2];
extern const pb_field_t EccMultiplyRequest_fields[4];
extern const pb_field_t EccMultiplyReply_fields[6];
extern const pb_field_t EraseDataRequest_fields[1];
extern const pb_field_t BitcoinSignRequest_fields[3];
extern const pb_field_t BitcoinSignResult_fields[2];

/* Maximum encoded size of messages (where known) */
#define RequestRejected_size                     532
#define GenericConfirmReply_size                 0
#define GetModeAndVersionRequest_size            0
#define GetModeAndVersionReply_size              88
#define UpgradeStartRequest_size                 533
/* SendUpgradeFirmware_size depends on runtime parameters */
#define WriteSerialNo_size                       66
#define WriteSerialNoReply_size                  68
#define LockSerialNo_size                        0
#define lockSerialNoReply_size                   68
#define EccSignOptions_size                      4
#define EccSignRequest_size                      1038
#define EccSignResult_size                       2581
#define EccGetPublicKeyRequest_size              517
#define EccGetPublicKeyReply_size                1032
#define EccGetExtendedPublicKeyRequest_size      517
#define EccGetExtendedPublicKeyReply_size        1291
#define GetWalletIdentifierRequest_size          0
#define GetWalletIdentifierReply_size            34
#define EccMultiplyRequest_size                  1032
#define EccMultiplyReply_size                    2062
#define EraseDataRequest_size                    0
#define BitcoinSignRequest_size                  8197
#define BitcoinSignResult_size                   8195

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define MESSAGES_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
