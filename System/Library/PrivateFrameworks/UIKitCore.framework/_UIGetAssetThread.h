/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSThread.h>

@class NSURL, ALAssetsLibrary, NSCondition, ALAsset;

@interface _UIGetAssetThread : NSThread {

	NSURL* _url;
	ALAssetsLibrary* _library;
	NSCondition* _condition;
	ALAsset* _asset;

}

@property (retain) NSCondition * condition;              //@synthesize condition=_condition - In the implementation block
@property (retain) ALAsset * asset;                      //@synthesize asset=_asset - In the implementation block
-(void)main;
-(NSCondition *)condition;
-(ALAsset *)asset;
-(void)setAsset:(ALAsset *)arg1 ;
-(id)initWithURL:(id)arg1 assetsLibrary:(id)arg2 ;
-(void)setCondition:(NSCondition *)arg1 ;
@end
