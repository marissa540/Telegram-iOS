#import <LegacyComponents/TGModernGalleryItemView.h>
#import <LegacyComponents/TGModernGalleryEditableItemView.h>
#import <LegacyComponents/TGModernGalleryImageItemImageView.h>
#import <AVFoundation/AVFoundation.h>

@protocol TGMediaEditableItem;
@protocol TGPhotoDrawingEntitiesView;

@interface TGMediaPickerGalleryVideoItemView : TGModernGalleryItemView <TGModernGalleryEditableItemView>

@property (nonatomic, strong) TGModernGalleryImageItemImageView *imageView;
@property (nonatomic, strong) AVPlayer *player;

@property (nonatomic, readonly) bool isPlaying;

@property (nonatomic, readonly) bool hasTrimming;
@property (nonatomic, readonly) CMTimeRange trimRange;

- (void)play;
- (void)stop;

- (void)playIfAvailable;

- (void)setPlayButtonHidden:(bool)hidden animated:(bool)animated;
- (void)toggleSendAsGif;

- (void)setScrubbingPanelApperanceLocked:(bool)locked;
- (void)setScrubbingPanelHidden:(bool)hidden animated:(bool)animated;
- (void)presentScrubbingPanelAfterReload:(bool)afterReload;

- (void)prepareForEditing;
- (void)returnFromEditing;

- (void)prepareForCoverEditing;
- (void)returnFromCoverEditing;

- (NSTimeInterval)currentPosition;
- (UIImage *)screenImage;
- (UIImage *)transitionImage;
- (CGRect)editorTransitionViewRect;
- (UIView<TGPhotoDrawingEntitiesView> *)entitiesView;

- (id<TGMediaEditableItem>)editableMediaItem;

@end
