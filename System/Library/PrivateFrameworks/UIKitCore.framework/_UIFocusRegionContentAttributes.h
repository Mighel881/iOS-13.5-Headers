/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _UIFocusRegion;

@interface _UIFocusRegionContentAttributes : NSObject <NSCopying> {

	BOOL _requiresIntersectionWithFocusMapSearchArea;
	_UIFocusRegion* _contentRegion;

}

@property (nonatomic,copy) _UIFocusRegion * contentRegion;                                 //@synthesize contentRegion=_contentRegion - In the implementation block
@property (assign,nonatomic) BOOL requiresIntersectionWithFocusMapSearchArea;              //@synthesize requiresIntersectionWithFocusMapSearchArea=_requiresIntersectionWithFocusMapSearchArea - In the implementation block
+(id)attributesForFocusRegionContentInContainer:(id)arg1 coordinateSpace:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_UIFocusRegion *)contentRegion;
-(void)setContentRegion:(_UIFocusRegion *)arg1 ;
-(BOOL)requiresIntersectionWithFocusMapSearchArea;
-(void)setRequiresIntersectionWithFocusMapSearchArea:(BOOL)arg1 ;
@end

