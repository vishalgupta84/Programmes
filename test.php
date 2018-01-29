     <div id="fb-root"></div>

        <script>
        window.fbAsyncInit = function() {
                FB.init({
                appId: '181347822253454',
                status: true,
                cookie: true,
                xfbml: true
            });
        };

        // Load the SDK asynchronously
        (function(d){
        var js, id = 'facebook-jssdk', ref = d.getElementsByTagName('script')[0];
        if (d.getElementById(id)) {return;}
        js = d.createElement('script'); js.id = id; js.async = true;
        js.src = "//connect.facebook.net/en_US/all.js";
        ref.parentNode.insertBefore(js, ref);
        }(document));

        function login() {
            FB.login(function(response) {

            // handle the response
            console.log("Response goes here!");

            }, {scope: 'Public_profile,email'});            
        }

        function logout() {
            FB.logout(function(response) {
              // user is now logged out
            });
        }

        var status = FB.getLoginStatus();

        console.log(status);

        </script>

        <button onclick="javascript:login();">Login Facebook</button>

        <br>

        <button onclick="javascript:logout();">Logout from Facebook</button>