/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/APSConnectionDelegate.h>

@class APSConnection, CKAPSMachServiceConnectionKey, NSString;

@interface CKAPSMachServiceConnectionDelegate : NSObject <APSConnectionDelegate> {

	APSConnection* _connection;
	CKAPSMachServiceConnectionKey* _key;

}

@property (assign,nonatomic,__weak) APSConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy) CKAPSMachServiceConnectionKey * key;              //@synthesize key=_key - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CKAPSMachServiceConnectionKey *)key;
-(void)setKey:(CKAPSMachServiceConnectionKey *)arg1 ;
-(APSConnection *)connection;
-(void)setConnection:(APSConnection *)arg1 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4 ;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3 ;
-(void)connection:(id)arg1 didSendOutgoingMessage:(id)arg2 ;
-(void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3 ;
-(void)connection:(id)arg1 didChangeConnectedStatus:(BOOL)arg2 ;
-(void)connectionDidReconnect:(id)arg1 ;
-(id)initWithConnection:(id)arg1 key:(id)arg2 ;
@end

