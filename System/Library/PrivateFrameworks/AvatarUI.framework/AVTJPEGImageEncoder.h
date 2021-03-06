/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AVTImageEncoder.h>

@class NSString;

@interface AVTJPEGImageEncoder : NSObject <AVTImageEncoder> {

	double _compressionQuality;

}

@property (nonatomic,readonly) double compressionQuality;              //@synthesize compressionQuality=_compressionQuality - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)fileExtension;
-(double)compressionQuality;
-(id)imageFromData:(id)arg1 error:(id*)arg2 ;
-(id)imageFromURL:(id)arg1 error:(id*)arg2 ;
-(id)dataFromImage:(id)arg1 ;
-(id)initWithCompressionQuality:(double)arg1 ;
@end

