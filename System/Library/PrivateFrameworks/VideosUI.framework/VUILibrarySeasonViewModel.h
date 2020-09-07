/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol VUIMediaEntityIdentifier;
@class NSObject;

@interface VUILibrarySeasonViewModel : NSObject <NSCopying> {

	NSObject*<VUIMediaEntityIdentifier> _seasonIdentifier;
	unsigned long long _type;

}

@property (nonatomic,readonly) NSObject*<VUIMediaEntityIdentifier> seasonIdentifier;              //@synthesize seasonIdentifier=_seasonIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                           //@synthesize type=_type - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(NSObject*<VUIMediaEntityIdentifier>)seasonIdentifier;
-(id)initWithSeasonIdentifier:(id)arg1 type:(unsigned long long)arg2 ;
@end
