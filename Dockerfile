# Ejecutamos la reconstruccion desde la imagen descargada
FROM alexcheng/apache2-php7

# Actualizamos Repositorio de Ubuntu e Instalamos Paquetes Requeridos
RUN apt-get update && apt-get install -y \
    build-essential \
    libpng-dev \
    libfreetype6-dev \
    libjpeg62-dev \
    libsqlite3-0 \
    libsqlite3-dev \
    mysql-client \
    locales \
    zip \
    jpegoptim optipng pngquant gifsicle \
    vim \
    unzip \
    git \
    curl \
    nano \
    net-tools \
    iproute2 \
    iputils-ping

# Borramos cache
RUN apt-get clean && rm -rf /var/lib/apt/lists/*
 
# Recompilamos php e instalamos las extensiones necesarias para nuestro proyecto
RUN docker-php-ext-install mbstring zip exif pcntl json pdo pdo_sqlite pdo_mysql
RUN docker-php-ext-configure gd --with-gd --with-freetype-dir=/usr/include/ --with-jpeg-dir=/usr/include/ --with-png-dir=/usr/include/
RUN docker-php-ext-install gd
