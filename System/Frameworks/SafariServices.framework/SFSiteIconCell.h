/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/_SFSiteIconModel.h>

@class UIImage, NSString, UIView, _SFSiteIconView, UILabel;

@interface SFSiteIconCell : UICollectionViewCell <_SFSiteIconModel> {

	UIView* _iconDimmingView;
	_SFSiteIconView* _iconView;
	UILabel* _subtitleLabel;
	UILabel* _titleLabel;

}

@property (nonatomic,readonly) UIView * contextMenuPreviewView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIImage * icon; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
+(id)reuseIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)prepareForReuse;
-(NSString *)subtitle;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)updateConstraints;
-(UIImage *)icon;
-(void)setIcon:(UIImage *)arg1 ;
-(UIView *)contextMenuPreviewView;
-(void)setIconFromBookmark:(id)arg1 ;
@end

