/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDSwatchRenderingOperation.h>

@class TSDImageInfo;

@interface TSDImageRenderingOperation : TSDSwatchRenderingOperation {

	TSDImageInfo* mImageInfo;
	BOOL mShouldClipVertically;

}

@property (retain) TSDImageInfo * imageInfo; 
-(void)dealloc;
-(TSDImageInfo *)imageInfo;
-(void)doWorkWithReadLock;
-(id)initWithPreset:(id)arg1 imageSize:(CGSize)arg2 imageScale:(double)arg3 swatchFrame:(CGRect)arg4 imageInfo:(id)arg5 documentRoot:(id)arg6 shouldClipVertically:(BOOL)arg7 ;
-(id)initWithPreset:(id)arg1 imageSize:(CGSize)arg2 imageScale:(double)arg3 swatchFrame:(CGRect)arg4 imageInfo:(id)arg5 documentRoot:(id)arg6 ;
-(void)setImageInfo:(TSDImageInfo *)arg1 ;
@end
