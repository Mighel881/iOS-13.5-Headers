/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ISOperationQueue;

@interface ISURLOperationPool : NSObject {

	ISOperationQueue* _operationQueue;

}

@property (nonatomic,retain) ISOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
-(id)init;
-(void)dealloc;
-(ISOperationQueue *)operationQueue;
-(void)setOperationQueue:(ISOperationQueue *)arg1 ;
-(void)cancelOperation:(id)arg1 ;
-(void)addOperation:(id)arg1 withFlags:(long long)arg2 ;
-(id)_poolOperationForOperation:(id)arg1 flags:(long long)arg2 ;
@end
