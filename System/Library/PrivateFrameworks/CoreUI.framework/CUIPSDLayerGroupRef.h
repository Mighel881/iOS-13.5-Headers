/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIPSDLayerBaseRef.h>

@class _CUIPSDSublayerInfo;

@interface CUIPSDLayerGroupRef : CUIPSDLayerBaseRef {

	_CUIPSDSublayerInfo* _sublayerInfo;

}
-(void)dealloc;
-(BOOL)isOpen;
-(CGRect)bounds;
-(id)initWithImageRef:(id)arg1 layerIndex:(unsigned)arg2 ;
-(id)layerRefAtIndex:(unsigned)arg1 ;
-(unsigned)numberOfLayers;
-(id)layerNames;
-(BOOL)isLayerGroup;
-(BOOL)_isGroupType:(unsigned)arg1 ;
-(BOOL)isGroupStart;
-(BOOL)isGroupEnd;
-(id)layerEnumerator;
-(void)enumerateLayersUsingBlock:(/*^block*/id)arg1 ;
@end

