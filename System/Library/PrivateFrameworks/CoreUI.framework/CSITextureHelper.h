/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@interface CSITextureHelper : NSObject {

	csibitmap* bmp;
	CGColorSpaceRef colorspaceHint;
	unsigned long long sourceRowbytes;
	unsigned width;
	unsigned height;
	unsigned imageBytes;
	int pixelFormat;

}
-(void)dealloc;
-(BOOL)expandIntoBuffer:(id)arg1 error:(id*)arg2 ;
@end

