/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKDAssetBatch, NSMutableDictionary;

@interface CKDTransactionState : NSObject {

	CKDAssetBatch* _assetBatch;
	NSMutableDictionary* _itemByAssetId;

}

@property (nonatomic,retain) CKDAssetBatch * assetBatch;                       //@synthesize assetBatch=_assetBatch - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * itemByAssetId;              //@synthesize itemByAssetId=_itemByAssetId - In the implementation block
-(id)init;
-(CKDAssetBatch *)assetBatch;
-(void)setAssetBatch:(CKDAssetBatch *)arg1 ;
-(NSMutableDictionary *)itemByAssetId;
-(void)setItemByAssetId:(NSMutableDictionary *)arg1 ;
@end
