/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFAccountValidatorDelegate.h>
#import <libobjc.A.dylib/WLDataclassMigrating.h>

@class ACAccountStore, NSString;

@interface WLMailAccountMigrator : NSObject <MFAccountValidatorDelegate, WLDataclassMigrating> {

	ACAccountStore* _accountStore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contentType;
-(id)contentType;
-(id)dataType;
-(void)accountValidator:(id)arg1 finishedValidationOfAccount:(id)arg2 usedSSL:(BOOL)arg3 ;
-(BOOL)accountBased;
-(void)importRecordData:(id)arg1 summary:(id)arg2 account:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)storeRecordDataInDatabase;
-(void)estimateItemSizeForSummary:(id)arg1 account:(id)arg2 ;
-(id)importWillBegin;
-(void)importDidEnd;
-(void)_importGoogleAccountWithUsername:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

