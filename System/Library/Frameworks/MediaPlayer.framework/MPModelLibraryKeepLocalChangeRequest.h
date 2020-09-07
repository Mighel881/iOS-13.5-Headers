/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPModelObject;

@interface MPModelLibraryKeepLocalChangeRequest : NSObject <NSCopying> {

	MPModelObject* _modelObject;
	long long _enableState;

}

@property (nonatomic,retain) MPModelObject * modelObject;              //@synthesize modelObject=_modelObject - In the implementation block
@property (assign,nonatomic) long long enableState;                    //@synthesize enableState=_enableState - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(MPModelObject *)modelObject;
-(void)setModelObject:(MPModelObject *)arg1 ;
-(long long)enableState;
-(void)setEnableState:(long long)arg1 ;
@end
