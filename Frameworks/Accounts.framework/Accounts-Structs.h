/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct __SecKey* SecKeyRef;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned doubleValue : 1;
	unsigned integerValue : 1;
	unsigned unsignedIntegerValue : 1;
} SCD_Struct_AC2;

typedef struct __SecIdentity* SecIdentityRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct __SCPreferences* SCPreferencesRef;

typedef struct {
	unsigned isPersistent : 1;
} SCD_Struct_AC6;

typedef struct {
	unsigned supportsAuthentication : 1;
	unsigned visibility : 1;
	unsigned encryptAccountProperties : 1;
	unsigned obsolete : 1;
	unsigned supportsMultipleAccounts : 1;
} SCD_Struct_AC7;
