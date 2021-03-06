/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, _TVContentRating, NSDate;

@interface VUIFamilySharingRelationship : NSObject {

	NSString* _identifier;
	_TVContentRating* _contentRating;
	NSString* _standardDescription;
	NSString* _artworkURL;
	NSDate* _releaseDate;
	NSString* _genreTitle;

}

@property (nonatomic,retain) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) _TVContentRating * contentRating;              //@synthesize contentRating=_contentRating - In the implementation block
@property (nonatomic,retain) NSString * standardDescription;                //@synthesize standardDescription=_standardDescription - In the implementation block
@property (nonatomic,retain) NSString * artworkURL;                         //@synthesize artworkURL=_artworkURL - In the implementation block
@property (nonatomic,retain) NSDate * releaseDate;                          //@synthesize releaseDate=_releaseDate - In the implementation block
@property (nonatomic,retain) NSString * genreTitle;                         //@synthesize genreTitle=_genreTitle - In the implementation block
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDate *)releaseDate;
-(void)setReleaseDate:(NSDate *)arg1 ;
-(NSString *)genreTitle;
-(NSString *)artworkURL;
-(void)setArtworkURL:(NSString *)arg1 ;
-(void)setContentRating:(_TVContentRating *)arg1 ;
-(_TVContentRating *)contentRating;
-(void)setStandardDescription:(NSString *)arg1 ;
-(void)setGenreTitle:(NSString *)arg1 ;
-(NSString *)standardDescription;
@end

