/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString;

@interface SKUIStoreIdentifier : NSObject <NSCopying> {

	NSNumber* _itemIdentifier;
	NSString* _podcastFeedURLIdentifier;
	NSString* _bundleIdentifier;

}

@property (nonatomic,readonly) NSNumber * itemIdentifier;                      //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                      //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * podcastFeedURLIdentifier;              //@synthesize podcastFeedURLIdentifier=_podcastFeedURLIdentifier - In the implementation block
-(long long)longLongValue;
-(id)initWithLongLong:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)stringValue;
-(NSString *)bundleIdentifier;
-(NSNumber *)itemIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id)numberValue;
-(id)initWithNumber:(id)arg1 ;
-(void)setPodcastFeedURLIdentifier:(NSString *)arg1 ;
-(id)initWithPodcastFeedURL:(id)arg1 ;
-(NSString *)podcastFeedURLIdentifier;
@end

