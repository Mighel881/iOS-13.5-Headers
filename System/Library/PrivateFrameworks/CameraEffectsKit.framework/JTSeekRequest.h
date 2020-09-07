/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraEffectsKit/JTClipSequencePlayerRequest.h>

@interface JTSeekRequest : JTClipSequencePlayerRequest {

	int _seekTime;

}

@property (assign,nonatomic) int seekTime;              //@synthesize seekTime=_seekTime - In the implementation block
-(id)description;
-(int)seekTime;
-(void)setSeekTime:(int)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 withSeekTime:(int)arg2 ;
@end
