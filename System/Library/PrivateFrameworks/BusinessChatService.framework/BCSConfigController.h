/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BCSConfigController : NSObject
-(void)fetchBloomFilterWithStartIndex:(long long)arg1 shardCount:(long long)arg2 forClientBundleID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)fetchConfigItemForClientBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_shardHashForIndex:(long long)arg1 count:(long long)arg2 ;
-(void)deleteConfigItemFromPersistentStore;
@end
