/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TeaUI/TeaUI-Structs.h>
@interface TSBlueprintManualImpressionUpdateProvider : NSObject {

	 updateImpressionsBlocks;
	 endImpressionsBlocks;
	 visibleViewAccessor;
	 visibleRectAccessor;

}
-(id)init;
-(void)endImpressions;
-(void)setVisibileViewAccessor:(/*^block*/id)arg1 visibleRectAccessor:(/*^block*/id)arg2 ;
-(void)updateImpressionsForView:(id)arg1 withVisibleRect:(CGRect)arg2 ;
@end

