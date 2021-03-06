/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsFeed.framework/NewsFeed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsFeed/NewsFeed-Structs.h>
#import <libobjc.A.dylib/TSProcessedImageRequestType.h>

@class NSDictionary, NSString;

@interface NEPublisherLogoProcessorRequest : NSObject <TSProcessedImageRequestType> {

	 assetHandles;
	 publisherLogoImageSize;
	 scale;
	 theme;

}

@property (copy,nonatomic) NSDictionary * assetHandles; 
@property (readonly,nonatomic) NSString * cacheIdentifier; 
-(id)init;
-(NSString *)cacheIdentifier;
-(NSDictionary *)assetHandles;
-(void)setAssetHandles:(NSDictionary *)arg1 ;
-(id)initWithPublisherLogoAssetHandle:(id)arg1 publisherLogoImageSize:(CGSize)arg2 scale:(double)arg3 theme:(long long)arg4 ;
@end

