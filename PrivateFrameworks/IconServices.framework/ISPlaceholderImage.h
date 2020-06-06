/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IconServices/IconServices-Structs.h>
#import <IconServices/ISImage.h>

@class ISImage;

@interface ISPlaceholderImage : ISImage {

	ISImage* _image;

}

@property (readonly) ISImage * image;              //@synthesize image=_image - In the implementation block
-(CGSize)size;
-(double)scale;
-(ISImage *)image;
-(id)initWithImage:(id)arg1 ;
-(CGSize)minimumSize;
-(BOOL)placeholder;
-(CGImageRef)cgImage;
@end
