'use strict';

module.exports = {
    MsgTypeLowLimit: 0, // for compare
    MsgTypeGenericConfirmReply: 1,
    MsgTypeRequestRejected: 2,
    MsgTypeGetModeAndVersionRequst: 3,
    MsgTypeGetModeAndVersionReply: 4,
    MsgTypeWriteSerialNoRequest: 5,
    MsgTypeWriteSerialNoReply: 6,
    MsgTypeLockSerialNoRequest: 7,
    MsgTypeEraseDataRequest: 8,
    MsgTypeLockSerialNoReply: 9,
    MsgTypeUpgradeStartRequest: 10,
    MsgTypeSendUpgradeFirmware: 11,
    MsgTypeEccSignRequest: 15,
    MsgTypeEccSignResult: 16,
    MsgTypeEccGetPublicKeyRequest: 17,
    MsgTypeEccGetPublicKeyReply: 18,
    MsgTypeEccMultiplyRequest: 19,
    MsgTypeEccMultiplyReply: 20,
    MsgTypeHighLimit: 21, // for compare
};
