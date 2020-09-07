/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CALayer, NSString;

@interface CAStateControllerAnimation : NSObject {

	CALayer* _layer;
	NSString* _key;

}

@property (nonatomic,readonly) CALayer * layer;              //@synthesize layer=_layer - In the implementation block
@property (nonatomic,readonly) NSString * key;               //@synthesize key=_key - In the implementation block
-(void)dealloc;
-(NSString *)key;
-(CALayer *)layer;
-(id)initWithLayer:(id)arg1 key:(id)arg2 ;
@end
