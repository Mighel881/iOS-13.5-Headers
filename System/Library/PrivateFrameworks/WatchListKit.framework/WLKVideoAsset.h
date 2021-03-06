/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WLKVideoAsset : NSObject {

	NSString* _URL;
	NSString* _programID;
	NSString* _assetID;

}

@property (nonatomic,copy,readonly) NSString * URL;                    //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy,readonly) NSString * programID;              //@synthesize programID=_programID - In the implementation block
@property (nonatomic,copy,readonly) NSString * assetID;                //@synthesize assetID=_assetID - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)URL;
-(NSString *)assetID;
-(NSString *)programID;
@end

