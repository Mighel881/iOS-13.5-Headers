/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoVision/PhotoVision-Structs.h>
#import <PhotoVision/PVObject.h>

@class NSString, NSArray;

@interface PVFaceGroup : PVObject {

	long long _personBuilderState;
	NSString* _personLocalIdentifier;
	NSString* _representativeFaceLocalIdentifier;
	NSArray* _faces;

}

@property (assign,nonatomic) long long personBuilderState;                            //@synthesize personBuilderState=_personBuilderState - In the implementation block
@property (nonatomic,copy) NSString * personLocalIdentifier;                          //@synthesize personLocalIdentifier=_personLocalIdentifier - In the implementation block
@property (nonatomic,copy) NSString * representativeFaceLocalIdentifier;              //@synthesize representativeFaceLocalIdentifier=_representativeFaceLocalIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * faces;                                         //@synthesize faces=_faces - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFaces:(NSArray *)arg1 ;
-(NSArray *)faces;
-(NSString *)personLocalIdentifier;
-(void)setPersonBuilderState:(long long)arg1 ;
-(long long)personBuilderState;
-(void)setPersonLocalIdentifier:(NSString *)arg1 ;
-(id)initWithFaceGroup:(id)arg1 ;
-(void)_setPropertiesFrom:(id)arg1 ;
-(NSString *)representativeFaceLocalIdentifier;
-(void)setRepresentativeFaceLocalIdentifier:(NSString *)arg1 ;
@end

