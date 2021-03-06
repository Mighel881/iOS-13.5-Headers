/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSAttributedString, CATextLayer, CALayer;

@interface AVPictureInPictureIndicatorLayer : CALayer {

	NSAttributedString* _attributedText;
	CGSize _imageSize;
	NSEdgeInsets _languageAwareOutsets;
	double _lineHeight;
	double _baselineOffset;
	CATextLayer* _textLayer;
	CALayer* _imageLayer;

}
-(id)init;
-(void)layoutSublayers;
-(id)initWithDisplayScale:(double)arg1 placeholderImage:(CGImageRef)arg2 opaque:(BOOL)arg3 ;
-(CGRect)textBoundingRectWhenDrawnInRect:(CGRect)arg1 ;
@end

