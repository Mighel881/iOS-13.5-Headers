/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DocumentCamera/DocumentCamera-Structs.h>
#import <UIKitCore/UIView.h>

@class DCNotesTextureView, NSLayoutConstraint;

@interface DCNotesTextureBackgroundView : UIView {

	BOOL _scrollsTexture;
	DCNotesTextureView* _textureView;
	NSLayoutConstraint* _textureYConstraint;
	NSLayoutConstraint* _textureHeightConstraint;

}

@property (nonatomic,retain) NSLayoutConstraint * textureYConstraint;                   //@synthesize textureYConstraint=_textureYConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textureHeightConstraint;              //@synthesize textureHeightConstraint=_textureHeightConstraint - In the implementation block
@property (nonatomic,readonly) DCNotesTextureView * textureView;                        //@synthesize textureView=_textureView - In the implementation block
@property (assign) BOOL scrollsTexture;                                                 //@synthesize scrollsTexture=_scrollsTexture - In the implementation block
+(id)textureImage;
+(id)colorWithPaperTexturePatternImage;
-(id)initWithCoder:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(id)initWithFrame:(CGRect)arg1 scrollingTextures:(BOOL)arg2 hasAlpha:(BOOL)arg3 ;
-(DCNotesTextureView *)textureView;
-(void)commonInitWithScrollingTextures:(BOOL)arg1 hasAlpha:(BOOL)arg2 ;
-(double)heightByCoveringHeight:(double)arg1 withImage:(id)arg2 ;
-(BOOL)scrollsTexture;
-(void)setScrollsTexture:(BOOL)arg1 ;
-(void)setTextureYConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTextureHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)textureYConstraint;
-(NSLayoutConstraint *)textureHeightConstraint;
@end

