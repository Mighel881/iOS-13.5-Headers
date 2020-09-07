/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWInferenceMediaRequirement.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BWInferenceVideoFormat;

@interface BWInferenceVideoRequirement : BWInferenceMediaRequirement <NSCopying> {

	BWInferenceVideoFormat* _videoFormat;

}

@property (nonatomic,readonly) BWInferenceVideoFormat * videoFormat;              //@synthesize videoFormat=_videoFormat - In the implementation block
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BWInferenceVideoFormat *)videoFormat;
-(id)initWithAttachedMediaKey:(id)arg1 videoFormat:(id)arg2 ;
-(id)initWithVideoRequirement:(id)arg1 ;
-(id)initWithAttachedMediaKey:(id)arg1 ;
-(BOOL)isSatisfiedByRequirement:(id)arg1 ;
-(unsigned long long)satisfactionHash;
@end
