/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CDPDaemonConnection;

@interface CDPFollowUpController : NSObject {

	CDPDaemonConnection* _daemonConn;

}
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(BOOL)postFollowUpWithContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)clearFollowUpWithContext:(id)arg1 error:(id*)arg2 ;
@end
