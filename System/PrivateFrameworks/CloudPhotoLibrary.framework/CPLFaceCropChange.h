/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLRecordChange.h>

@class NSString, NSData;

@interface CPLFaceCropChange : CPLRecordChange {

	NSString* _personIdentifier;
	NSData* _resourceData;
	long long _faceCropType;
	NSString* _rejectedPersonIdentifier;

}

@property (nonatomic,copy) NSString * personIdentifier;                      //@synthesize personIdentifier=_personIdentifier - In the implementation block
@property (nonatomic,copy) NSData * resourceData;                            //@synthesize resourceData=_resourceData - In the implementation block
@property (assign,nonatomic) long long faceCropType;                         //@synthesize faceCropType=_faceCropType - In the implementation block
@property (nonatomic,copy) NSString * rejectedPersonIdentifier;              //@synthesize rejectedPersonIdentifier=_rejectedPersonIdentifier - In the implementation block
-(NSData *)resourceData;
-(NSString *)personIdentifier;
-(void)setPersonIdentifier:(NSString *)arg1 ;
-(void)setRejectedPersonIdentifier:(NSString *)arg1 ;
-(void)setResourceData:(NSData *)arg1 ;
-(void)setFaceCropType:(long long)arg1 ;
-(NSString *)rejectedPersonIdentifier;
-(long long)faceCropType;
-(BOOL)supportsDeletion;
-(id)propertiesDescription;
-(BOOL)supportsDirectDeletion;
-(id)relatedIdentifier;
-(void)setRelatedIdentifier:(id)arg1 ;
-(BOOL)validateFullRecord;
-(BOOL)validateChangeWithError:(id*)arg1 ;
-(id)personScopedIdentifier;
-(void)setPersonScopedIdentifier:(id)arg1 ;
@end

