/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARImageData.h>

@class ARImageData, NSDictionary;

@interface ARModifiedImageData : ARImageData {

	ARImageData* _originalImage;
	NSDictionary* _metaData;

}

@property (nonatomic,readonly) ARImageData * originalImage; 
@property (nonatomic,copy) NSDictionary * metaData;                      //@synthesize metaData=_metaData - In the implementation block
-(id)initWithImageData:(id)arg1 ;
-(NSDictionary *)metaData;
-(void)setMetaData:(NSDictionary *)arg1 ;
-(ARImageData *)originalImage;
@end
