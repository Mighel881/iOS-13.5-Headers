/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AKAnnotation.h>
#import <libobjc.A.dylib/AKStrokedAnnotationProtocol.h>

@class UIColor, NSString;

@interface AKStrokedAnnotation : AKAnnotation <AKStrokedAnnotationProtocol> {

	BOOL _dashed;
	BOOL _hasShadow;
	double _strokeWidth;
	UIColor* _strokeColor;
	long long _brushStyle;

}

@property (assign) double strokeWidth;                              //@synthesize strokeWidth=_strokeWidth - In the implementation block
@property (retain) UIColor * strokeColor;                           //@synthesize strokeColor=_strokeColor - In the implementation block
@property (getter=isDashed) BOOL dashed;                            //@synthesize dashed=_dashed - In the implementation block
@property (assign) long long brushStyle;                            //@synthesize brushStyle=_brushStyle - In the implementation block
@property (assign) BOOL hasShadow;                                  //@synthesize hasShadow=_hasShadow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffectingHitTestBounds;
+(id)keyPathsForValuesAffectingDrawingBounds;
+(id)displayNameForUndoablePropertyChangeWithKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)displayName;
-(BOOL)hasShadow;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(void)setHasShadow:(BOOL)arg1 ;
-(UIColor *)strokeColor;
-(double)strokeWidth;
-(void)setStrokeWidth:(double)arg1 ;
-(void)setDashed:(BOOL)arg1 ;
-(id)keysForValuesToObserveForUndo;
-(BOOL)isDashed;
-(long long)brushStyle;
-(id)keysForValuesToObserveForRedrawing;
-(void)setBrushStyle:(long long)arg1 ;
@end

