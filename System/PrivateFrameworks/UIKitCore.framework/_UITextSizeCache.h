/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface _UITextSizeCache : NSObject {

	ui_size_cache* _cache;

}
-(id)description;
-(BOOL)getSize:(CGSize*)arg1 baselineInfo:(SCD_Struct_UI127*)arg2 forTargetSize:(CGSize)arg3 isMultiline:(BOOL)arg4 ;
-(void)addSize:(CGSize)arg1 baselineInfo:(SCD_Struct_UI127*)arg2 forTargetSize:(CGSize)arg3 ;
-(void)removeAllSizes;
@end

