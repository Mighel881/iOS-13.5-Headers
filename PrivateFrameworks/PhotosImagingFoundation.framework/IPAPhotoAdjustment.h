/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <PhotosImagingFoundation/IPAAdjustment.h>

@class NSString, NSDictionary;

@interface IPAPhotoAdjustment : IPAAdjustment {

	BOOL _enabled;
	NSString* _maskUUID;
	NSDictionary* _autoSettings;

}

@property (assign,nonatomic) BOOL enabled;                             //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) NSString * maskUUID;                      //@synthesize maskUUID=_maskUUID - In the implementation block
@property (nonatomic,retain) NSDictionary * autoSettings;              //@synthesize autoSettings=_autoSettings - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(NSDictionary *)autoSettings;
-(NSString *)maskUUID;
-(id)_debugDescriptionSuffix;
-(void)setMaskUUID:(NSString *)arg1 ;
-(void)setAutoSettings:(NSDictionary *)arg1 ;
@end
