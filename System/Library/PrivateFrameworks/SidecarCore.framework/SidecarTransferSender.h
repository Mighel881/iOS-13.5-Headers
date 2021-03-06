/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SidecarCore.framework/SidecarCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SidecarCore/SidecarTransfer.h>

@class NSArray, NSMutableArray;

@interface SidecarTransferSender : SidecarTransfer {

	long long _itemID;
	NSArray* _items;
	NSMutableArray* _slices;
	long long _type;

}

@property (nonatomic,readonly) long long type; 
-(long long)type;
-(void)sendItems:(id)arg1 messageType:(long long)arg2 ;
-(id)initWithSession:(id)arg1 requestID:(long long)arg2 transferID:(long long)arg3 ;
-(/*^block*/id)_resumeMessage:(id)arg1 ;
-(void)_sendCompletion:(id)arg1 ;
@end

