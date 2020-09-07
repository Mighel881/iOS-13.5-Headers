/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class MPModelObject, MPMediaLibrary, MPModelKind;

@interface MPModelLibraryHasPurchasesRequest : NSObject {

	MPModelObject* _modelObject;
	MPMediaLibrary* _mediaLibrary;
	MPModelKind* _itemKind;

}

@property (nonatomic,retain) MPModelObject * modelObject;                //@synthesize modelObject=_modelObject - In the implementation block
@property (nonatomic,retain) MPMediaLibrary * mediaLibrary;              //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (nonatomic,retain) MPModelKind * itemKind;                     //@synthesize itemKind=_itemKind - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(MPModelObject *)modelObject;
-(void)setModelObject:(MPModelObject *)arg1 ;
-(MPModelKind *)itemKind;
-(void)setItemKind:(MPModelKind *)arg1 ;
-(MPMediaLibrary *)mediaLibrary;
-(void)setMediaLibrary:(MPMediaLibrary *)arg1 ;
@end
