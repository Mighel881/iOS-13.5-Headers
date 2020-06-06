/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary;


@protocol CXCallObserverDataSource <NSObject>
@property (nonatomic,copy,readonly) NSDictionary * callUUIDToCallMap; 
@required
-(void)invalidate;
-(void)addDelegate:(id)arg1;
-(void)removeDelegate:(id)arg1;
-(NSDictionary *)callUUIDToCallMap;
-(void)requestTransaction:(id)arg1 completion:(/*^block*/id)arg2;

@end
