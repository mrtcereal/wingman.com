

(function ($) {
            	$(document).ready(function(){
        	       


    //Portfolio Image Hover

    $(".portfolio li ").hover(function () {						 

    	$(this).find("img").stop(true, true).animate({ opacity: 0.4 }, 800);

        $(this).find("a").stop(true, true).fadeIn(300);

    }, function() {

    	$(this).find("img").stop(true, true).animate({ opacity: 1.0 }, 800);

        $(this).find("a").stop(true, true).fadeOut(100);

    });	
				
				
				    //TWITTER

    $(".tweet").tweet({

    	  join_text: "auto",

    	  username: "#",

    	  avatar_size: 40,

    	  count: 2,

    	  auto_join_text_default: "we said,",

    	  auto_join_text_ed: "we",

    	  auto_join_text_ing: "we were",

    	  auto_join_text_reply: "we replied",

    	  auto_join_text_url: "we were checking out",

    	  loading_text: "loading tweets..."

    });
	
	
	
				
				   //SLIDER

    $(function() {

        $('#ei-slider').eislideshow({

            animation   : 'sides',
            
            autoplay	: true,

			easing		: 'easeOutExpo',

			titleeasing	: 'easeInOutBack',

			titlespeed	: 1200,

            slideshow_interval	: 6000,

            speed			: 800

        });

    });

    
	
	});
        
          
})(jQuery);

(function ($) {
	
	$(document).ready(function(){
			//prettyPhoto

    $("a[rel^='prettyPhoto']").prettyPhoto();
	
	  //FLICKR

    $('#flickr').jflickrfeed({

		limit: 9,

		qstrings: {

			id: '#'

		},

		itemTemplate: '<li>'+

						'<a rel="prettyPhoto[flickr]" href="{{image}}" title="{{title}}">' +

							'<img src="{{image_s}}" alt="{{title}}" />' +

						'</a>' +

					  '</li>'

	}, function(data) {

		$("a[rel^='prettyPhoto']").prettyPhoto({			

				autoplay_slideshow: 'false', 

				overlay_gallery: 'false', 

				show_title: 'false'

		});

        

        

        $("#flickr li").hover(function () {						 

    	   $(this).find("img").stop(true, true).animate({ opacity: 0.5 }, 800);

        }, function() {

    	   $(this).find("img").stop(true, true).animate({ opacity: 1.0 }, 800);

        });

            

            

	});

    
 //TOGGLE
    $(".close").click(function(){$("#seting").toggle("fast");
    $(this).toggleClass("openpanel");return false});
    
    $(".toggle-block").hide(); 
    $("p.toggle").click(function(){
    		$(this).toggleClass("active").next().slideToggle(500);
    		return false; 
    });
    	
        
    //ACCORDION
    $('.acc-block').hide();
    $('.acc-header:first').addClass('active').next().show();
    $('.acc-header').click(function(){
    	if( $(this).next().is(':hidden') ) {
    		$('.acc-header').removeClass('active').next().slideUp();
    		$(this).toggleClass('active').next().slideDown();
    	}
    	return false;
    });

	
	
	});

})(jQuery);