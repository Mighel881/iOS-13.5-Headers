/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface TIAssetsForInputModeLevel : NSObject {

	NSMutableDictionary* _assetsByAttributes;
	long long _numberOfAssertions;
	NSString* _inputModeLevel;

}

@property (nonatomic,readonly) NSString * inputModeLevel;              //@synthesize inputModeLevel=_inputModeLevel - In the implementation block
-(BOOL)isEmpty;
-(id)recursiveDescription;
-(void)addAsset:(id)arg1 ;
-(void)addAssertion;
-(void)removeAssertion;
-(BOOL)purgeAsset:(id)arg1 ;
-(id)assetContentItemsMatching:(id)arg1 ;
-(BOOL)hasAssertions;
-(void)gatherStatistics:(id)arg1 ;
-(id)purgeableAssets;
-(NSString *)inputModeLevel;
-(id)initWithInputModeLevel:(id)arg1 ;
-(id)assetVersionsForAttributes:(id)arg1 ;
-(void)removeEmptyAssets;
@end

