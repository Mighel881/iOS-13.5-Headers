/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NNMKProtoMessageDeletions, NSArray;

@interface NNMKDeletionResult : NSObject {

	NNMKProtoMessageDeletions* _protectedProtobuf;
	NNMKProtoMessageDeletions* _unprotectedNotificationProtobuf;
	NNMKProtoMessageDeletions* _unprotectedDefaultProtobuf;
	NSArray* _protectedMessageIds;
	NSArray* _unprotectedNotificationMessageIds;
	NSArray* _unprotectedDefaultMessageIds;

}

@property (nonatomic,retain) NNMKProtoMessageDeletions * protectedProtobuf;                            //@synthesize protectedProtobuf=_protectedProtobuf - In the implementation block
@property (nonatomic,retain) NNMKProtoMessageDeletions * unprotectedNotificationProtobuf;              //@synthesize unprotectedNotificationProtobuf=_unprotectedNotificationProtobuf - In the implementation block
@property (nonatomic,retain) NNMKProtoMessageDeletions * unprotectedDefaultProtobuf;                   //@synthesize unprotectedDefaultProtobuf=_unprotectedDefaultProtobuf - In the implementation block
@property (nonatomic,retain) NSArray * protectedMessageIds;                                            //@synthesize protectedMessageIds=_protectedMessageIds - In the implementation block
@property (nonatomic,retain) NSArray * unprotectedNotificationMessageIds;                              //@synthesize unprotectedNotificationMessageIds=_unprotectedNotificationMessageIds - In the implementation block
@property (nonatomic,retain) NSArray * unprotectedDefaultMessageIds;                                   //@synthesize unprotectedDefaultMessageIds=_unprotectedDefaultMessageIds - In the implementation block
-(void)setProtectedProtobuf:(NNMKProtoMessageDeletions *)arg1 ;
-(void)setProtectedMessageIds:(NSArray *)arg1 ;
-(void)setUnprotectedNotificationProtobuf:(NNMKProtoMessageDeletions *)arg1 ;
-(void)setUnprotectedNotificationMessageIds:(NSArray *)arg1 ;
-(void)setUnprotectedDefaultProtobuf:(NNMKProtoMessageDeletions *)arg1 ;
-(void)setUnprotectedDefaultMessageIds:(NSArray *)arg1 ;
-(NNMKProtoMessageDeletions *)protectedProtobuf;
-(NNMKProtoMessageDeletions *)unprotectedNotificationProtobuf;
-(NNMKProtoMessageDeletions *)unprotectedDefaultProtobuf;
-(NSArray *)protectedMessageIds;
-(NSArray *)unprotectedNotificationMessageIds;
-(NSArray *)unprotectedDefaultMessageIds;
@end
