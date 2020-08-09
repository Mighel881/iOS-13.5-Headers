/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUIImage.h>

@class NSString;

@interface SearchUIMonogramImage : SearchUIImage {

	NSString* _letters;

}

@property (nonatomic,retain) NSString * letters;              //@synthesize letters=_letters - In the implementation block
+(id)avatarImageRenderer;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)letters;
-(void)setLetters:(NSString *)arg1 ;
-(id)initWithSFImage:(id)arg1 ;
-(void)loadImageWithCompletionHandler:(/*^block*/id)arg1 ;
@end
